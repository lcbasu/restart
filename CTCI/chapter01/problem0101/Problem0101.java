// [1.1] Implement an algorithm to determine if a string has all unique characters.

public class Problem0101 {
    private boolean containsAllUniqueChars(String str) {
        // Optimization
        // If # chars > 256 there must be duplicates
        if (str.length() > 256) {
            return false;
        }
        // The meat
        boolean[] charCounts = new boolean[256];
        for (int i=0; i<str.length(); i++) {
            int charInt = str.charAt(i);
            if (charCounts[charInt]) {
                return false;
            }
            charCounts[charInt] = true;
        }
        return true;
    }

    public static void main (String[] args) {
        Problem0101 problem0101 = new Problem0101();
        problem0101.run();
    }

    private void run() {
        System.out.println("~Problem0101~");
        String testStr = "thisisatestwordwithrepeatchars";
        System.out.println(testStr);
        System.out.println(containsAllUniqueChars(testStr));
        testStr = "abcdefghi2140$5%";
        System.out.println(testStr);
        System.out.println(containsAllUniqueChars(testStr));
    }
}
