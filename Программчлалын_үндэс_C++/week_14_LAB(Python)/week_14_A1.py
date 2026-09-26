def is_palindrome(s):
    if len(s) <= 1:
        return True
    if s[0] != s[-1]:
        return False
    return is_palindrome(s[1:-1])

text = input()
if is_palindrome(text):
    print("Палиндром мөн")
else:
    print("Палиндром биш")