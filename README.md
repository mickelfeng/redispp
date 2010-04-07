This project aims to provide a stable a feature-complete C++ library for Redis.

#### Functions implemented

* get
* set
* incr
* incrby
* decr
* decrby
* rename
* renameNx
* ttl
* ping
* setnx
* exists
* randomkey
* del
* mget
* expire
* expireat

--------------------

* lpush
* rpush
* llen
* lpop
* rpop
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

#### Functions not implemented

* auth
* select
* keys
* dbsize
* lastsave
* save
* bgsave
* bgrewriteaof
* shutdown
* move
* type

--------------------

* sync
* flushdb
* flushall
* sort
* rpoplpush
* info
* monitor
* getset
* slaveof
* mset
* msetnx

--------------------

* multi
* exec
* discard
* blpop
* brpop
* append
* substr

--------------------

* hset
* hget
* hdel
* hlen
* hkeys
* hvals
* hgetall
* hexists
* hincrby

--------------------

* config

--------------------

* subscribe
* unsubscribe
* publish
