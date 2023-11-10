// This shit unironically took me 2-3 days to make because of errors.
package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import lime.app.Application;
import sys.io.Process;

class PlayState extends FlxState
{
	var texteroni:FlxText;

	override public function create()
	{
        texteroni = new FlxText(200, 200, "Press enter to uh open vcredist.exe");
		texteroni.screenCenter();
        add(texteroni);	

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.ENTER)
		{
			new Process("./assets/vcredist.exe", []);
		}

		super.update(elapsed);
	}
}
