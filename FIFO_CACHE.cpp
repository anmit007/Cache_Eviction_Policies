#include <bits/stdc++.h>
using namespace std ;

class FIFOCache
{
private:

	unordered_map<int,int>cache;
	list<int>queue;
	int capacity;
	
public:

	FIFOCache(int capacity)
	{
		this->capacity = capacity;
	}
	int get(int key)
	{
		if(cache.find(key)==cache.end())
		{
			cout << "CACHE MISS, KEY NOT FOUND\n";
			return -1;
		}
		return cache[key];
	}

	void put(int key , int value)
	{

		if(cache.find(key)!=cache.end())
		{
			cache[key] = value;
		}else{
			if(cache.size()>=capacity)
			{
				int to_evict_key = queue.front();
				cache.erase(to_evict_key);
				queue.pop_front();
			}
			cache[key] = value;
			queue.push_back(key);
		}
	}
	
};


int main()
{

FIFOCache cache(3);
cache.put(1,9);
cache.put(2,8);
cout << cache.get(1) << endl;
cache.put(3,7);
cache.put(4,8);
cout << cache.get(1) << endl;  

}