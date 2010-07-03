var sys = require('sys');
var getUnixTime = require('time').getUnixTime;

sys.log("Unix time: " + (getUnixTime()).toString());

