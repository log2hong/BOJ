initial=["ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ", "ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ"]
medial=["た", "だ", "ち", "ぢ", "っ", "つ", "づ", "て", "で", "と", "ど", "な", "に", "ぬ", "ね", "の", "は", "ば", "ぱ", "ひ", "び"]
final=["", "ぁ", "あ", "ぃ", "い", "ぅ", "う", "ぇ", "ぉ", "お", "か", "が", "き", "ぎ", "く", "ぐ", "け", "げ", "ご", "さ", "ざ", "し", "じ", "ず", "せ", "ぜ", "そ", "ぞ" ]
ans = 44032
a = input()
for i in range(len(initial)):
   if(a == initial[i]):
      ans += (i * 21 * 28)

b = input()
for i in range(len(medial)):
   if(b==medial[i]):
      ans += (i * 28)

c = input()
for i in range(len(final)):
   if(c == final[i]):
      ans += i

print(chr(ans))