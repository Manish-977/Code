#write a python program to find the stirng similarity between two given strings. in python
def levenshtein_distance(str1, str2):
    if len(str1) < len(str2):
        return levenshtein_distance(str2, str1)

    if len(str2) == 0:
        return len(str1)

    previous_row = range(len(str2) + 1)
    for i, c1 in enumerate(str1):
        current_row = [i + 1]
        for j, c2 in enumerate(str2):
            insertions = previous_row[j + 1] + 1
            deletions = current_row[j] + 1
            substitutions = previous_row[j] + (c1 != c2)
            current_row.append(min(insertions, deletions, substitutions))
        previous_row = current_row

    return previous_row[-1]

def string_similarity(str1, str2):
    distance = levenshtein_distance(str1, str2)
    max_len = max(len(str1), len(str2))
    similarity = 1 - distance / max_len
    return similarity

# Example usage
string1 = "kitten"
string2 = "sitting"
similarity_score = string_similarity(string1, string2)
print(f"Similarity between '{string1}' and '{string2}': {similarity_score:.2f}")