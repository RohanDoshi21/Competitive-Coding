class StringOperations:
    def __init__(self):
        self.string = ""

    def longestWord(self):
        LongestWord = ""
        word = ""
        for i in range(len(self.string)):
            word += self.string[i]
            if self.string[i] == " " or i == len(self.string)-1:
                if len(word) > len(LongestWord):
                    LongestWord = word
                word = ""

        return LongestWord

    def frequency(self):
        character = input("Enter the character you want to find frequency")
        count = 0
        for i in range(len(self.string)):
            if self.string[i] == character:
                count += 1

        return count

    def isPalindrome(self):
        x = len(self.string) - 1
        result = True
        for i in range(len(self.string)//2):
            if self.string[i] != self.string[x]:
                result = False
                break
            x += 1

        return result

    def findSubstring(self):
        string2 = input("Enter substring")
        for i in range(len(self.string) - len(string2) + 1):
            for j in range(len(string2)):
                if self.string[i+j] != string2[j]:
                    break
            if j == len(string2) - 1:
                return i

        return -1

    def OccurrenceEachWord(self):
        mapWords = {}
        word = ""
        for i in range(len(self.string)):
            word += self.string[i]
            if self.string[i] == " " or len(self.string) - 1:
                if word in mapWords.keys():
                    mapWords[word] += 1
                else:
                    mapWords[word] = 1
                word = ""

        return mapWords


s1 = StringOperations()
s1.string = input("Enter String")

print("Longest Word")
print(s1.longestWord())

print("Frequency")
print(s1.frequency())

print("Palindrome")
print(s1.isPalindrome())

print("SubString")
print(s1.findSubstring())

print("All Occurrence")
print(s1.OccurrenceEachWord())
