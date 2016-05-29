
import re
strinfo = re.compile('\[[0-9]+x[0-9]+\]')

s = "the resolution: [1280x800] is ok"

p = strinfo.sub('', s)

print p
