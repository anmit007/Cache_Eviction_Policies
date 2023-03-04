# Cache Eviction Policies :

 - Some of the popular cache eviction polices are :
 	- LIFO 
 	- FIFO
 	- LRU
 	- MRU
 	- LFU
 	- RR

 - LIFO

 	- LIFO stands for "Last In, First Out," and it is a cache eviction policy where the most recently added item to the cache is the first one to be evicted when the cache reaches its capacity. In other words, the items that were added last to the cache will be the first ones to be removed when the cache is full.
	- When a new item is added to the cache, it is placed at the top of the cache stack. As the cache fills up, the oldest items that are at the bottom of the stack are evicted first to make room for the new items. This means that the items that are accessed frequently will remain in the cache, while the ones that are rarely accessed will be evicted.

