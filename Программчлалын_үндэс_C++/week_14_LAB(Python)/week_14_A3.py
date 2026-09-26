def count_vowels_and_specials(s):
    vowels = "aeiouAEIOUүүөөаеиоуҮҮӨӨАЕИОУ"
    vowel_count = 0
    special_count = 0

    for char in s:
        if char in vowels:
            vowel_count += 1
        elif not char.isalnum() and not char.isspace():
            special_count += 1

    return vowel_count, special_count

text = input()
v_count, s_count = count_vowels_and_specials(text)
print(f"Эгшиг: {v_count}")
print(f"Тусгай тэмдэгт: {s_count}")