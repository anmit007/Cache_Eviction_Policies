#include <bits/stdc++.h>

using namespace std ;


class LIFOCache
{

public:

unordered_map<int,int>cache;
stack<int> Stack;
int capacity;

public:

	LIFOCache(int capacity)
	{
		this->capacity = capacity;
	}


	int get(int key)
	{

		if(cache.find(key)==cache.end())
		{
			cout << "KEY NOT FOUND , CACHE MISS \n";
			return -1;
		}
		return cache[key];
	}

	void put(int key,int value)
	{

		if(cache.find(key)!=cache.end())
		{
			cache[key] = value;
		}
		else{
			if(cache.size()>=capacity)
			{
				
				int to_evict_key = Stack.top();
				cache.erase(to_evict_key);
				Stack.pop();
				//cout << "CACHE_ SIZE =  " << cache.size() <<endl;
			}
			cache[key] = value;
			
		}
		Stack.push(key);
	}

};





int main()
{
LIFOCache cache(2);
cache.put(2,6);
cache.put(3,1);
cache.put(5,99);
cout << cache.get(3)<<endl;



  
}