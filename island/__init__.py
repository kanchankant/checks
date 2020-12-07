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

def IslandX():
    """Tests IslandX"""
    p = check50.run("./islandmain")
    islandx = [[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1],[1,1,1,1,1]]
    for i in islandx:
        for j in i:
            p.stdin(str(j))
    p.stdout(str(0))
    p.exit(0)

@check50.check(compiles)
def sort_reversed():
    """sorts {5,4,3,2,1}"""
    IslandX()
