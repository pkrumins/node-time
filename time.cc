#include <v8.h>
#include <node.h>
#include <time.h>
#include <sys/time.h>

using namespace v8;
using namespace node;

Handle<Value>
getUnixTime(const Arguments &args)
{
    HandleScope scope;

    Local<Integer> unixTime = Integer::New(time(NULL));
    return scope.Close(unixTime);
}

Handle<Value>
getTimeval(const Arguments &args)
{
    HandleScope scope;

    struct timeval t;
    gettimeofday(&t, NULL);

    Local<Object> ret = Object::New();
    ret->Set(String::NewSymbol("sec"), Integer::New(t.tv_sec));
    ret->Set(String::NewSymbol("usec"), Integer::New(t.tv_usec));

    return scope.Close(ret);
}

Handle<Value>
getMilliseconds(const Arguments &args)
{
    HandleScope scope;

    struct timeval t;
    gettimeofday(&t, NULL);

    Local<Number> mil = Number::New((double)t.tv_sec*1000 + t.tv_usec/1000);
    return scope.Close(mil);
}

extern "C" void init (Handle<Object> target)
{
    HandleScope scope;
    target->Set(String::New("getUnixTime"), FunctionTemplate::New(getUnixTime)->GetFunction());
    target->Set(String::New("getTimeval"), FunctionTemplate::New(getTimeval)->GetFunction());
    target->Set(String::New("getMilliseconds"), FunctionTemplate::New(getMilliseconds)->GetFunction());
}

