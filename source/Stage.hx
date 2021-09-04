package;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.effects.chainable.FlxWaveEffect;
import flixel.group.FlxGroup;
import flixel.system.FlxSound;

class Stage
{
    public var curStage:String = '';
    public var halloweenLevel:Bool = false;
    public var camZoom:Float; // The zoom of the camera to have at the start of the game
    public var hideLastBG:Bool = false; // True = hide last BGs and show ones from slowBacks on certain step, False = Toggle visibility of BGs from SlowBacks on certain step
	// Use visible property to manage if BG would be visible or not at the start of the game
    public var tweenDuration:Float = 2; // How long will it tween hiding/showing BGs, variable above must be set to True for tween to activate
    public var toAdd:Array<Dynamic> = []; // Add BGs on stage startup, load BG in by using "toAdd.push(bgVar);"
    // Layering algorithm for noobs: Everything loads by the method of "On Top", example: You load wall first(Every other added BG layers on it), then you load road(comes on top of wall and doesn't clip through it), then loading street lights(comes on top of wall and road)
    public var swagBacks:Map<String, Dynamic> = []; // Store BGs here to use them later in PlayState / with slowBacks / or to adjust position in stage debug menu(press 8 while in PlayState with debug build of the game)
    public var swagGroup:Map<String, FlxTypedGroup<Dynamic>> = []; // Store Groups
    public var animatedBacks:Array<FlxSprite> = []; // Store animated backgrounds and make them play animation(Animation must be named Idle!! Else use swagGroup/swagBacks and script it in PlayState)
    public var layInFront:Array<Array<FlxSprite>> = [[], [], []]; // BG layering, format: first [0] - in front of GF, second [1] - in front of opponent, third [2] - in front of boyfriend(and technically also opponent since Haxe layering moment)
    public var slowBacks:Map<Int, Array<FlxSprite>> = []; // Change/add/remove backgrounds mid song! Format: "slowBacks[StepToBeActivated] = [Sprites,To,Be,Changed,Or,Added];"
	// BGs still must be added by using toAdd Array for them to show in game after slowBacks take effect!!

	// All of the above must be set or used in your stage case code block!!

    public function new(daStage:String)
    {
        this.curStage = daStage;
        camZoom = 1.05; // Don't change zoom here, unless you want to change zoom of every stage that doesn't have custom one
        halloweenLevel = false;
		if (PlayStateChangeables.Optimize) return;

        switch(daStage)
        {
			case 'basement':
				{
					camZoom = 0.9;
					curStage = 'basement';

					var wall:FlxSprite = new FlxSprite(-553.85, -290.3);
					wall.frames = Paths.getSparrowAtlas('background', 'carl');
					wall.animation.addByPrefix('idle', 'BACKGROUND WALL', 24);
					wall.animation.play('idle');
					wall.scrollFactor.set(1, 1);
					wall.active = true;
					toAdd.push(wall);

					var torch:FlxSprite = new FlxSprite(435.9, 122.65);
					torch.frames = Paths.getSparrowAtlas('the_torch', 'carl');
					torch.animation.addByPrefix('idle', 'TORCH', 24);
					torch.animation.play('idle');
					torch.scrollFactor.set(1, 1);
					torch.active = true;
					toAdd.push(torch);

					var floor:FlxSprite = new FlxSprite(-422.35, 564.45);
					floor.frames = Paths.getSparrowAtlas('fixed floor', 'carl');
					floor.animation.addByPrefix('idle', 'BACKGROUND FLOOR1', 24);
					floor.animation.play('idle');
					floor.scrollFactor.set(1, 1);
					floor.active = true;
					toAdd.push(floor);

					var stairs:FlxSprite = new FlxSprite(1403.7, 90.8);
					stairs.frames = Paths.getSparrowAtlas('fixed floor', 'carl');
					stairs.animation.addByPrefix('idle', 'BACKGROUND FLOOR 2', 24);
					stairs.animation.play('idle');
					stairs.scrollFactor.set(1, 1);
					stairs.active = true;
					toAdd.push(stairs);
				}
			case 'cave-thing':
				{
					camZoom = 0.80;
					curStage = 'cave-thing';

					var wall:FlxSprite = new FlxSprite(-904.75, -384.15);
					wall.frames = Paths.getSparrowAtlas('backgroundphase2', 'carl');
					wall.animation.addByPrefix('idle', 'background wall shit', 24);
					wall.animation.play('idle');
					wall.scrollFactor.set(1, 1);
					wall.active = true;
					toAdd.push(wall);

					var bones:FlxSprite = new FlxSprite(-141.9, 224).loadGraphic(Paths.image('PILE-OBONES', 'carl'));
					bones.antialiasing = true;
					bones.scrollFactor.set(1, 1);
					bones.active = false;
					toAdd.push(bones);

					var crystal:FlxSprite = new FlxSprite(364.9, 6.85);
					crystal.frames = Paths.getSparrowAtlas('crystal', 'carl');
					crystal.animation.addByPrefix('idle', 'Crystrill', 24);
					crystal.animation.play('idle');
					crystal.scrollFactor.set(1, 1);
					crystal.active = true;
					toAdd.push(crystal);

					var rails:FlxSprite = new FlxSprite(-619.4, 443.6);
					rails.frames = Paths.getSparrowAtlas('backgroundphase2', 'carl');
					rails.animation.addByPrefix('idle', 'the fucking rails', 24);
					rails.animation.play('idle');
					rails.scrollFactor.set(1, 1);
					rails.active = true;
					toAdd.push(rails);

					var otherwall:FlxSprite = new FlxSprite(-832.35, -614.75);
					otherwall.frames = Paths.getSparrowAtlas('backgroundphase2', 'carl');
					otherwall.animation.addByPrefix('idle', 'BROKEN WALL', 24);
					otherwall.animation.play('idle');
					otherwall.scrollFactor.set(1, 1);
					otherwall.active = true;
					layInFront[2].push(otherwall);

					var torch1:FlxSprite = new FlxSprite(-584.85, 122.25);
					torch1.frames = Paths.getSparrowAtlas('the_torch', 'carl');
					torch1.animation.addByPrefix('idle', 'TORCH', 24);
					torch1.animation.play('idle');
					torch1.scrollFactor.set(1, 1);
					torch1.active = true;
					layInFront[2].push(torch1);

					var torch2:FlxSprite = new FlxSprite(1431, 126.8);
					torch2.frames = Paths.getSparrowAtlas('the_torch', 'carl');
					torch2.animation.addByPrefix('idle', 'TORCH', 24);
					torch2.animation.play('idle');
					torch2.scrollFactor.set(1, 1);
					torch2.active = true;
					layInFront[2].push(torch2);


				}
			case 'finale':
				{
					camZoom = 0.70;
					curStage = 'finale';

					var wall:FlxSprite = new FlxSprite(-1657.4, -1409.7);
					wall.frames = Paths.getSparrowAtlas('backgroundthirdphase', 'carl');
					wall.animation.addByPrefix('idle', 'COMPLEGE BACKGOUND', 24);
					wall.animation.play('idle');
					wall.scrollFactor.set(1, 1);
					wall.active = true;
					toAdd.push(wall);

					var crystal:FlxSprite = new FlxSprite(196.35, -1240.65);
					crystal.frames = Paths.getSparrowAtlas('HUGE', 'carl');
					crystal.animation.addByPrefix('idle', 'A FUCKING LARGE AS FUUUUUUCK CRYSSAL', 24);
					crystal.animation.play('idle');
					crystal.scrollFactor.set(1, 1);
					crystal.active = true;
					toAdd.push(crystal);

					var altar:FlxSprite = new FlxSprite(-200.75, -86.9);
					altar.frames = Paths.getSparrowAtlas('backgroundthirdphase', 'carl');
					altar.animation.addByPrefix('idle', 'THE FUCKING ALTAR', 24);
					altar.animation.play('idle');
					altar.scrollFactor.set(1, 1);
					altar.active = true;
					toAdd.push(altar);
				}
			case 'outside':
				{
					camZoom = 0.70;
					curStage = 'outside';

					var wall:FlxSprite = new FlxSprite(-884.7, -519.95);
					wall.frames = Paths.getSparrowAtlas('phase4shit', 'carl');
					wall.animation.addByPrefix('idle', 'HTE MOTHA FUCKIN BACKGROUND FOR $', 24);
					wall.animation.play('idle');
					wall.scrollFactor.set(1, 1);
					wall.active = true;
					toAdd.push(wall);

					var crystal:FlxSprite = new FlxSprite(-1142.5, -231.3);
					crystal.frames = Paths.getSparrowAtlas('phase4shit', 'carl');
					crystal.animation.addByPrefix('idle', 'LMAO RIP BOZO CRYSTAL', 24);
					crystal.animation.play('idle');
					crystal.scrollFactor.set(1, 1);
					crystal.active = true;
					toAdd.push(crystal);

					var skeletoncrowd:FlxSprite = new FlxSprite(-721.55, 645.95);
					skeletoncrowd.frames = Paths.getSparrowAtlas('phase4shit', 'carl');
					skeletoncrowd.animation.addByPrefix('idle', 'the crowd but theyre orange', 24, false);
					skeletoncrowd.scrollFactor.set(1, 1);
					skeletoncrowd.antialiasing = true;
					swagBacks['skeletoncrowd'] = skeletoncrowd;
					layInFront[2].push(skeletoncrowd);
					animatedBacks.push(skeletoncrowd);

					var ground:FlxSprite = new FlxSprite(-17.75, 1062.85).loadGraphic(Paths.image('CREAM', 'carl'));
					ground.updateHitbox();
					ground.antialiasing = true;
					ground.scrollFactor.set(1, 1);
					ground.active = false;
					toAdd.push(ground);

				}
			default:
				{
					camZoom = 0.9;
					curStage = 'stage';
					var bg:FlxSprite = new FlxSprite(-600, -200).loadGraphic(Paths.image('stageback'));
					bg.antialiasing = FlxG.save.data.antialiasing;
					bg.scrollFactor.set(0.9, 0.9);
					bg.active = false;
					swagBacks['bg'] = bg;
                    toAdd.push(bg);

					var stageFront:FlxSprite = new FlxSprite(-650, 600).loadGraphic(Paths.image('stagefront'));
					stageFront.setGraphicSize(Std.int(stageFront.width * 1.1));
					stageFront.updateHitbox();
					stageFront.antialiasing = FlxG.save.data.antialiasing;
					stageFront.scrollFactor.set(0.9, 0.9);
					stageFront.active = false;
					swagBacks['stageFront'] = stageFront;
                    toAdd.push(stageFront);

					var stageCurtains:FlxSprite = new FlxSprite(-500, -300).loadGraphic(Paths.image('stagecurtains'));
					stageCurtains.setGraphicSize(Std.int(stageCurtains.width * 0.9));
					stageCurtains.updateHitbox();
					stageCurtains.antialiasing = FlxG.save.data.antialiasing;
					stageCurtains.scrollFactor.set(1.3, 1.3);
					stageCurtains.active = false;

					swagBacks['stageCurtains'] = stageCurtains;
                    toAdd.push(stageCurtains);
				}
        }
    }
}