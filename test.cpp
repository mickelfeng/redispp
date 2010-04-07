#include "redis.h"
#include <iostream>

using namespace std;

int main() {

	Redis r;

	r.connect("127.0.0.1", 6379);
	cout << "set('x', 'hello world'): " << (r.set("x", "hello world").boolVal() ? "OK": "FAIL") << endl;
	RedisResponse resp = r.get("x");
	if(resp.type() == REDIS_STRING) {
		cout << "r.get('x') = " << resp.str() << endl;
	} else {
		cout << "FAIL" << endl;
	}

	RedisResponse respx0y = r.incr(RedisString("x\0y", 3));
	if(respx0y.type() == REDIS_LONG) {
		cout << "r.incr('x\\0y') = " << respx0y.value() << endl;
	} else {
		cout << "FAIL" << endl;
	}

	r.del("y");
	r.lpush("y", "abc");
	r.lpush("y", "def");

	RedisResponse rllen = r.llen("y");
	if(rllen.type() == REDIS_LONG) {
		cout << "LLEN y = " << rllen.value() << endl;
	} else {
		cout << "FAIL" << endl;
	}

	RedisResponse resp_range = r.lrange("y", 0, -1);
	cout << "lrange y 0 -1 gave me " << resp_range.size() << " items." << endl;



	return 0;
}

