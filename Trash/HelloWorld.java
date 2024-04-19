public class HelloWorld {
    // getBit
    static int getBit(int n, int pos) {
        return ((n & (1 << pos)) != 0) ? 1 : 0;
    }

    // setBit
    static int setBit(int n, int pos) {
        return (n | (1 << pos));
    }

    // clearBit
    static int clearBit(int n, int pos) {
        int mask = ~(1 << pos);
        return (n & mask);
    }

    // updateBit
    static int updateBit(int n, int pos, int value) {
        n = clearBit(n, pos);
        return n | (value << pos);
    }

    public static void main(String[] args) {
        // Example 1: Get Bit
        int num = 5; // Binary: 101
        int position = 1;
        int resultGetBit = getBit(num, position);
        System.out.println("Bit at position " + position + ": " + resultGetBit); // Output: 1

        // Example 2: Set Bit
        int numToSet = 5; // Binary: 101
        int setPos = 1;
        int resultSetBit = setBit(numToSet, setPos);
        System.out.println("Setting bit at position " + setPos + ": " + resultSetBit); // Output: 7 (Binary: 111)

        // Example 3: Clear Bit
        int numToClear = 5; // Binary: 101
        int clearPos = 0;
        int resultClearBit = clearBit(numToClear, clearPos);
        System.out.println("Clearing bit at position " + clearPos + ": " + resultClearBit); // Output: 4 (Binary: 100)

        // Example 4: Update Bit
        int numToUpdate = 5; // Binary: 101
        int updatePos = 1;
        int updateValue = 0;
        int resultUpdateBit = updateBit(numToUpdate, updatePos, updateValue);
        System.out.println("Updating bit at position " + updatePos + " to " + updateValue + ": " + resultUpdateBit); // Output: 4 (Binary: 100)
    }
}
