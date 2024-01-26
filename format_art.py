with open('art.txt') as f:
    lines = f.readlines()

formatted_lines = []

for line in lines:
    formatted_line = f'"{line.strip()}"\n'  
    formatted_lines.append(formatted_line)

with open('art_formatted.txt', 'w') as f:
    f.writelines(formatted_lines)