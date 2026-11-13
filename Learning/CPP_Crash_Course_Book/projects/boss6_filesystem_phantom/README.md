# 🐉 Boss 6 · The Filesystem Phantom

> Unlocks after clearing chapters **16, 17** · Reward **400 XP** · Fight: `./quest boss 6`

Build `dupes`, a duplicate-file finder. The Phantom hides copies of itself all over your disk.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] `dupes <dir> [--min-size N] [--ext .jpg] [--out report.txt]`
- [ ] Walks recursively with `recursive_directory_iterator`, skipping symlinks and permission errors gracefully
- [ ] Groups by file size first, then by a content hash (read in chunks with `ifstream`; implement FNV-1a yourself)
- [ ] Report groups sorted by wasted bytes, with human-readable sizes formatted using `<iomanip>`
- [ ] `--out` writes the report to a file instead of stdout
- [ ] Handles a directory with 10,000+ files in a few seconds (try it on ~/Downloads)

## How the fight works
- `./quest boss 6` compiles every `.cpp` in this folder (except `tests/`).
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss6 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
