class RandomizedSet {
private:
    unordered_map<int, int> valueIndexMap; // Maps value to its index in the vector
    vector<int> values; // Stores the elements

public:
    RandomizedSet() {
        // Constructor
    }
    
    bool insert(int val) {
        if (valueIndexMap.find(val) != valueIndexMap.end()) {
            return false; // Value already exists
        }
        valueIndexMap[val] = values.size(); // Map value to current index
        values.push_back(val); // Add value to the end of the vector
        return true;
    }
    
    bool remove(int val) {
        if (valueIndexMap.find(val) == valueIndexMap.end()) {
            return false; // Value does not exist
        }
        int lastElement = values.back(); // Get the last element in the vector
        int index = valueIndexMap[val]; // Get index of the element to remove
        
        values[index] = lastElement; // Replace the element to remove with the last element
        valueIndexMap[lastElement] = index; // Update index of the last element in the map
        
        values.pop_back(); // Remove the last element
        valueIndexMap.erase(val); // Remove the element from the map
        
        return true;
    }
    
    int getRandom() {
        int randomIndex = rand() % values.size(); // Generate a random index
        return values[randomIndex]; // Return the value at the random index
    }
};
