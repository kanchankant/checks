import check50
import check50.c

@check50.check()
def exists():
    """island.c exists."""
    check50.exists("island.c")

@check50.check(exists)
def compiles():
    """island.c compiles."""
    check50.include("island.h", "islandmain.c")
    check50.c.compile("islandmain.c", "island.c", lcs50=True)

def islandTest(island, answer):
    """Tests IslandX"""
    p = check50.run("./islandmain")
    for i in island:
        for j in i:
            p.stdin(str(j))
    p.stdout(str(answer))
    p.exit(0)

@check50.check(compiles)
def island_x():
    """Test Island X"""
    islandx = [[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1]]
    islandTest(islandx, 1)
