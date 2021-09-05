package;

import flixel.*;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

//stolen from bbpanzu (ty so much)
class EndingState extends FlxState
{

	override public function create():Void
	{
		super.create();
		var end:FlxSprite = new FlxSprite(0, 0);
		end.loadGraphic(Paths.image("congrats", 'carl'));
		FlxG.camera.fade(FlxColor.BLACK, 0.8, true);
		add(end);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		if (FlxG.keys.pressed.ENTER)
		{
			endIt();
		}
	}

	public function endIt(e:FlxTimer = null)
	{
		if (FlxG.save.data.scoreScreen)
		{
			openSubState(new ResultsScreen());
		}
        else
        {
            trace("ENDING");
			FlxG.sound.playMusic(Paths.music('freakyMenu'));
			Conductor.changeBPM(102);
			FlxG.switchState(new StoryMenuState());
        }
	}
}