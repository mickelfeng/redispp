This project aims to provide a stable, tested, and feature-complete C++ library for Redis.
It is released under the [New BSD License](http://www.opensource.org/licenses/bsd-license.php).

#### Functions implemented

* get (**TESTED**)
* set (**TESTED**)
* getset (**TESTED**)
* incr
* incrby
* decr
* decrby
* rename (**TESTED**)
* renamenx
* ttl
* ping (**TESTED**)
* setnx
* exists
* randomkey
* del (**TESTED**)
* mget
* mset
* msetnx
* expire
* expireat
* info
* multi
* exec
* discard
* auth
* select
* keys
* dbsize
* lastsave
* flushdb
* flushall
* save
* bgsave
* bgrewriteaof
* move
* sort
* type
* append
* substr
* config (`get` and `set`, not `resetstat`)

--------------------

* lpush
* rpush
* rpoplpush
* llen
* lpop
* rpop
* blpop
* brpop
* ltrim
* lindex
* lrem
* lset
* lrange

--------------------

* sadd
* srem
* sismember
* scard
* spop
* srandmember
* smove
* sinter
* sunion
* sdiff
* sinterstore
* sunionstore
* sdiffstore

--------------------

* zadd
* zincrby
* zrem
* zscore
* zrank
* zrevrank
* zrange
* zrevrange
* zcard
* zcount
* zremrangebyrank
* zrangebyscore
* zremrangebyscore
* zunion
* zinter

--------------------

* hset
* hget
* hdel
* hexists
* hlen
* hkeys
* hvals
* hgetall
* hincrby

#### Functions not implemented

* subscribe
* unsubscribe
* publish
