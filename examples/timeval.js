var sys = require('sys');
var getTimeval = require('time').getTimeval;

tv = getTimeval();

sys.log("tv.sec: " + tv.sec);
sys.log("tv.usec: " + tv.usec);

