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


- FIFO

	- FIFO stands for "First In, First Out," and it is a cache eviction policy where the oldest item in the cache is the first one to be evicted when the cache reaches its capacity. In other words, the items that were added first to the cache will be the first ones to be removed when the cache is full.
	- When a new item is added to the cache, it is placed at the bottom of the cache stack. As the cache fills up, the oldest items that are at the top of the stack are evicted first to make room for the new items. This means that the items that were accessed or added first to the cache will remain in the cache, while the newer items will be evicted.

- LRU 

	- LRU (Least Recently Used) cache eviction policy is a strategy used by computer programs to manage limited resources such as memory or disk space. In a cache, data that is frequently accessed or used is stored in a faster, more easily accessible location, such as RAM. This helps to speed up data retrieval times and improve overall system performance.
	- However, since cache memory is typically limited in size, it can become full over time. When this happens, the LRU policy is used to determine which data to remove from the cache to make room for new data. The idea behind the LRU policy is that the least recently used data is the least likely to be accessed again in the near future, and so it can be safely removed from the cache.
    - To implement the LRU policy, the cache manager keeps track of the order in which data items are accessed. When the cache becomes full, the data item that was accessed least recently is evicted, freeing up space for new data to be stored. This process is repeated whenever the cache becomes full, with the least recently used data being evicted each time.
	- The LRU cache eviction policy is widely used in computer systems and is an effective way to manage limited cache resources. However, there are other eviction policies that can be used as well, such as the LFU (Least Frequently Used) policy, which evicts the least frequently used data from the cache.

- RR 
	- Random Replacement (RR) is a cache eviction policy used in computer systems to determine which cache entries to remove when the cache becomes full and a new entry needs to be added. With this policy, the system randomly selects one of the cache entries to evict.
	- When a cache is filled with data, new entries are added by evicting one of the existing entries. The goal of the eviction policy is to select the least useful entry for eviction, in order to maximize cache hit rates. In the case of RR, the eviction policy does not consider the usefulness or age of the entries in the cache. Instead, it selects an entry to evict at random.
	- The advantage of RR is that it is simple to implement and requires no additional information about the contents of the cache. However, it may not always select the least useful entry for eviction, which can lead to lower cache hit rates and decreased performance in some cases. Other cache eviction policies, such as LRU (Least Recently Used) or LFU (Least Frequently Used), may be more effective in certain scenarios.




