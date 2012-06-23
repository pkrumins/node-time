var util = require('util');
var getTimeval = require('time').getTimeval;

tv = getTimeval();

util.log("tv.sec: " + tv.sec);
util.log("tv.usec: " + tv.usec);

