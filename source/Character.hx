package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.animation.FlxBaseAnimation;
import flixel.graphics.frames.FlxAtlasFrames;

using StringTools;

class Character extends FlxSprite
{
	public var animOffsets:Map<String, Array<Dynamic>>;
	public var debugMode:Bool = false;

	public var isPlayer:Bool = false;
	public var curCharacter:String = 'bf';

	public var holdTimer:Float = 0;

	public function new(x:Float, y:Float, ?character:String = "bf", ?isPlayer:Bool = false)
	{
		super(x, y);

		animOffsets = new Map<String, Array<Dynamic>>();
		curCharacter = character;
		this.isPlayer = isPlayer;

		var tex:FlxAtlasFrames;
		antialiasing = FlxG.save.data.antialiasing;

		switch (curCharacter)
		{
			case 'gf':
				// GIRLFRIEND CODE
				tex = Paths.getSparrowAtlas('GF_assets','shared',true);
				frames = tex;
				animation.addByPrefix('cheer', 'GF Cheer', 24, false);
				animation.addByPrefix('singLEFT', 'GF left note', 24, false);
				animation.addByPrefix('singRIGHT', 'GF Right Note', 24, false);
				animation.addByPrefix('singUP', 'GF Up Note', 24, false);
				animation.addByPrefix('singDOWN', 'GF Down Note', 24, false);
				animation.addByIndices('sad', 'gf sad', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], "", 24, false);
				animation.addByIndices('danceLeft', 'GF Dancing Beat', [30, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], "", 24, false);
				animation.addByIndices('danceRight', 'GF Dancing Beat', [15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29], "", 24, false);
				animation.addByIndices('hairBlow', "GF Dancing Beat Hair blowing", [0, 1, 2, 3], "", 24);
				animation.addByIndices('hairFall', "GF Dancing Beat Hair Landing", [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11], "", 24, false);
				animation.addByPrefix('scared', 'GF FEAR', 24);

				loadOffsetFile(curCharacter);

				playAnim('danceRight');
			case 'gf-ex':
					// GIRLFRIEND CODE
					tex = Paths.getSparrowAtlas('EX Tricky GF','shared',true);
					frames = tex;
					animation.addByPrefix('cheer', 'GF Ex Tricky', 24, false);
					animation.addByPrefix('singLEFT', 'GF Ex Tricky', 24, false);
					animation.addByPrefix('singRIGHT', 'GF Ex Tricky', 24, false);
					animation.addByPrefix('singUP', 'GF Ex Tricky', 24, false);
					animation.addByPrefix('singDOWN', 'GF Ex Tricky', 24, false);
					animation.addByIndices('sad', 'GF Ex Tricky', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12], "", 24, false);
					animation.addByIndices('danceLeft', 'GF Ex Tricky', [30, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], "", 24, false);
					animation.addByIndices('danceRight', 'GF Ex Tricky', [15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29], "", 24, false);

					loadOffsetFile(curCharacter);
	
					playAnim('danceRight');
			case 'bf':
				var tex = Paths.getSparrowAtlas('BOYFRIEND','shared',true);
				frames = tex;

				trace(tex.frames.length);

				animation.addByPrefix('idle', 'BF idle dance', 24, false);
				animation.addByPrefix('singUP', 'BF NOTE UP0', 24, false);
				animation.addByPrefix('singLEFT', 'BF NOTE LEFT0', 24, false);
				animation.addByPrefix('singRIGHT', 'BF NOTE RIGHT0', 24, false);
				animation.addByPrefix('singDOWN', 'BF NOTE DOWN0', 24, false);
				animation.addByPrefix('singUPmiss', 'BF NOTE UP MISS', 24, false);
				animation.addByPrefix('singLEFTmiss', 'BF NOTE LEFT MISS', 24, false);
				animation.addByPrefix('singRIGHTmiss', 'BF NOTE RIGHT MISS', 24, false);
				animation.addByPrefix('singDOWNmiss', 'BF NOTE DOWN MISS', 24, false);
				animation.addByPrefix('hey', 'BF HEY', 24, false);

				animation.addByPrefix('hit', 'BF hit', 24, false);
				animation.addByPrefix('dodge', 'boyfriend dodge', 24, false);

				animation.addByPrefix('firstDeath', "BF dies", 24, false);
				animation.addByPrefix('deathLoop', "BF Dead Loop", 24, false);
				animation.addByPrefix('deathConfirm', "BF Dead confirm", 24, false);

				animation.addByPrefix('scared', 'BF idle shaking', 24);

				loadOffsetFile(curCharacter);

				playAnim('idle');

				flipX = true;

			case 'bf-carl-dead':
				var tex = Paths.getSparrowAtlas('bf-carl-dead', 'shared', true);
				frames = tex;

				animation.addByPrefix('singUP', "BF dies", 24, false);
				animation.addByPrefix('firstDeath', "BF dies", 24, false);
				animation.addByPrefix('deathLoop', "BF Dead Loop0", 24, true);
				animation.addByPrefix('deathConfirm', "BF Dead confirm", 24, false);
				animation.play('firstDeath');

				loadOffsetFile(curCharacter);

				flipX = true;

			case 'carl-phase-1':
				var tex = Paths.getSparrowAtlas('carl-phase-1', 'shared', true);
				frames = tex;

				animation.addByPrefix('idle', 'Carl Idle', 24, false);
				animation.addByPrefix('singUP', 'Carl Up', 24, false);
				animation.addByPrefix('singDOWN', 'Carl Down', 24, false);
				animation.addByPrefix('singLEFT', 'Carl Left', 24, false);
				animation.addByPrefix('singRIGHT', 'Carl Right', 24, false);

				loadOffsetFile(curCharacter);

				playAnim('idle');

			case 'carl-phase-2':
				var tex = Paths.getSparrowAtlas('carl-phase-2', 'shared', true);
				frames = tex;

				animation.addByPrefix('idle', 'Carl 2 Idle', 24, false);
				animation.addByPrefix('singUP', 'Carl 2 Up', 24, false);
				animation.addByPrefix('singDOWN', 'Carl 2 Down', 24, false);
				animation.addByPrefix('singLEFT', 'Carl 2 Left', 24, false);
				animation.addByPrefix('singRIGHT', 'Carl 2 Right', 24, false);

				loadOffsetFile(curCharacter);

				playAnim('idle');

			case 'carl-phase-3':
				var tex = Paths.getSparrowAtlas('carl-phase-3', 'shared', true);
				frames = tex;

				animation.addByPrefix('idle', 'Carl 3 Idle', 24, false);
				animation.addByPrefix('singUP', 'Carl 3 Up', 24, false);
				animation.addByPrefix('singDOWN', 'Carl 3 Down', 24, false);
				animation.addByPrefix('singLEFT', 'Carl 3 Left', 24, false);
				animation.addByPrefix('singRIGHT', 'Carl 3 Right', 24, false);

				loadOffsetFile(curCharacter);

				playAnim('idle');
			case 'potionion':
				var tex = Paths.getSparrowAtlas('potionion', 'shared', true);
				frames = tex;

				animation.addByPrefix('idle', 'potion idle', 24, false);
				animation.addByPrefix('singUP', 'potion up', 24, false);
				animation.addByPrefix('singDOWN', 'potion down', 24, false);
				animation.addByPrefix('singLEFT', 'potion left', 24, false);
				animation.addByPrefix('singRIGHT', 'potion right', 24, false);
	
				loadOffsetFile(curCharacter);
	
				playAnim('idle');
			case 'tricky':
				var tex = Paths.getSparrowAtlas('CARLBUTTIKY', 'shared', true);
				frames = tex;
	
				animation.addByPrefix('idle', 'Carl Idle', 24, false);
				animation.addByPrefix('singUP', 'Carl Up', 24, false);
				animation.addByPrefix('singDOWN', 'Carl Down', 24, false);
				animation.addByPrefix('singLEFT', 'Carl Left', 24, false);
				animation.addByPrefix('singRIGHT', 'Carl Right', 24, false);
				animation.addByPrefix('singRIGHT', 'Carl Right', 24, false);
	
				loadOffsetFile(curCharacter);

				playAnim('idle');
			case 'tricky-anim':
				var tex = Paths.getSparrowAtlas('TRIKYANIM', 'shared', true);
				frames = tex;
	
				//idk if this code is useless or not but i added it so it doenst crash??
				//just in case yknow (i hope ash doesnt see this ajhsdfjhsdjhsdjk)
				animation.addByPrefix('idle', 'animgatuons', 24, false);
				animation.addByPrefix('singUP', 'animgatuons', 24, false);
				animation.addByPrefix('singDOWN', 'animgatuons', 24, false);
				animation.addByPrefix('singLEFT', 'animgatuons', 24, false);
				animation.addByPrefix('singRIGHT', 'animgatuons', 24, false);

				animation.addByPrefix('intro', 'animgatuons', 24, false);

				loadOffsetFile(curCharacter);
			case 'carl-onslaught':
				var tex = Paths.getSparrowAtlas('carls_onslaught', 'shared', true);
				frames = tex;

				animation.addByIndices('danceLeft', 'Onslaught Idle', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], "", 24, false);
				animation.addByIndices('danceRight', 'Onslaught Idle', [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14], "", 24, false);
				animation.addByPrefix('singUP', 'Onslaught Up', 24, false);
				animation.addByPrefix('singDOWN', 'Onslaught Down', 24, false);
				animation.addByPrefix('singLEFT', 'Onslaught Left', 24, false);
				animation.addByPrefix('singRIGHT', 'Onslaught Right', 24, false);

				loadOffsetFile(curCharacter);

				playAnim('danceRight');
		}

		dance();

		if (isPlayer && frames != null)
		{
			flipX = !flipX;

			// Doesn't flip for BF, since his are already in the right place???
			if (!curCharacter.startsWith('bf'))
			{
				// var animArray
				var oldRight = animation.getByName('singRIGHT').frames;
				animation.getByName('singRIGHT').frames = animation.getByName('singLEFT').frames;
				animation.getByName('singLEFT').frames = oldRight;

				// IF THEY HAVE MISS ANIMATIONS??
				if (animation.getByName('singRIGHTmiss') != null)
				{
					var oldMiss = animation.getByName('singRIGHTmiss').frames;
					animation.getByName('singRIGHTmiss').frames = animation.getByName('singLEFTmiss').frames;
					animation.getByName('singLEFTmiss').frames = oldMiss;
				}
			}
		}
	}

	public function loadOffsetFile(character:String, library:String = 'shared')
	{
		var offset:Array<String> = CoolUtil.coolTextFile(Paths.txt('images/characters/' + character + "Offsets", library));

		for (i in 0...offset.length)
		{
			var data:Array<String> = offset[i].split(' ');
			addOffset(data[0], Std.parseInt(data[1]), Std.parseInt(data[2]));
		}
	}

	override function update(elapsed:Float)
	{
		if (this != PlayState.boyfriend)
		{
			if (animation.curAnim.name.startsWith('sing'))
			{
				holdTimer += elapsed;
			}

			if (curCharacter.endsWith('-car') && !animation.curAnim.name.startsWith('sing') && animation.curAnim.finished && animation.getByName('idleHair') != null)
				playAnim('idleHair');

			var dadVar:Float = 4;

			if (curCharacter == 'dad')
				dadVar = 6.1;
			else if (curCharacter == 'gf' || curCharacter == 'spooky')
				dadVar = 4.1; //fix double dances
			if (holdTimer >= Conductor.stepCrochet * dadVar * 0.001)
			{
				if (curCharacter == 'gf' || curCharacter == 'spooky')
					playAnim('danceLeft'); //overridden by dance correctly later
				dance();
				holdTimer = 0;
			}
		}

		switch (curCharacter)
		{
			case 'gf':
				if (animation.curAnim.name == 'hairFall' && animation.curAnim.finished)
				{
					danced = true;
					playAnim('danceRight');
				}
		}

		super.update(elapsed);
	}

	private var danced:Bool = false;

	/**
	 * FOR GF DANCING SHIT
	 */
	public function dance(forced:Bool = false, altAnim:Bool = false)
	{
		if (!debugMode)
		{
			switch (curCharacter)
			{
				case 'gf' | 'gf-christmas' | 'gf-car' | 'gf-pixel' | 'gf-ex':
					if (!animation.curAnim.name.startsWith('hair') && !animation.curAnim.name.startsWith('sing'))
					{
						danced = !danced;

						if (danced)
							playAnim('danceRight');
						else
							playAnim('danceLeft');
					}
				case 'spooky':
					if (!animation.curAnim.name.startsWith('sing'))
					{
						danced = !danced;

						if (danced)
							playAnim('danceRight');
						else
							playAnim('danceLeft');
					}
				/*
				// new dance code is gonna end up cutting off animation with the idle
				// so here's example code that'll fix it. just adjust it to ya character 'n shit
				case 'custom character':
					if (!animation.curAnim.name.endsWith('custom animation'))
						playAnim('idle', forced);
				*/
				default:
					if (altAnim && animation.getByName('idle-alt') != null)
						playAnim('idle-alt', forced);
					else
						playAnim('idle', forced);
			}
		}
	}

	public function playAnim(AnimName:String, Force:Bool = false, Reversed:Bool = false, Frame:Int = 0):Void
	{

		if (AnimName.endsWith('alt') && animation.getByName(AnimName) == null)
		{
			#if debug
			FlxG.log.warn(['Such alt animation doesnt exist: ' + AnimName]);
			#end
			AnimName = AnimName.split('-')[0];
		}

		animation.play(AnimName, Force, Reversed, Frame);

		var daOffset = animOffsets.get(AnimName);
		if (animOffsets.exists(AnimName))
		{
			offset.set(daOffset[0], daOffset[1]);
		}
		else
			offset.set(0, 0);

		if (curCharacter == 'gf')
		{
			if (AnimName == 'singLEFT')
			{
				danced = true;
			}
			else if (AnimName == 'singRIGHT')
			{
				danced = false;
			}

			if (AnimName == 'singUP' || AnimName == 'singDOWN')
			{
				danced = !danced;
			}
		}
	}

	public function addOffset(name:String, x:Float = 0, y:Float = 0)
	{
		animOffsets[name] = [x, y];
	}
}
