package;

import flixel.FlxState;
import haxe.Http;
import haxe.Json;
import flixel.text.FlxText;

class PlayState extends FlxState
{

	var ipText:FlxText;

	override public function create()
	{
		// If you're using this in a fnf mod or sum, just make sure to put it before "super.create();"
        var http = new haxe.Http("https://api.ipify.org/?format=txt");
        http.onData = function (ipdata: String) {
            ipText = new FlxText(10, 10, "IP Address: " + ipdata);
			ipText.screenCenter();
            add(ipText);
        };

        http.onError = function (error) {
            trace('error: $error');
        };

        http.request();

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
