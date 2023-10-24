package;

import flixel.FlxState;
import lime.app.Application;

class PlayState extends FlxState
{
	override public function create()
	{
		Application.current.window.alert("0 - Luna");
		Sys.exit(0);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
