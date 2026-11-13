# 🐉 Boss 2 · The Operator Overlord

> Unlocks after clearing chapters **5, 6, 7** · Reward **300 XP** · Fight: `./quest boss 2`

Forge `Rational<T>`, an exact fraction type that behaves like a built-in number, plus a pluggable report printer.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] `template <std::integral T> class Rational` — constrained with a concept
- [ ] Always normalised (gcd, sign lives in the numerator); a zero denominator throws
- [ ] `+ - * /`, their compound forms, unary `-`, `==` and ordering (`<=>` or `<`)
- [ ] Explicit conversion to `double`; arithmetic is `constexpr` and proven with a few `static_assert`s
- [ ] A user-defined literal: `3_r` gives `Rational<long long>{3, 1}`
- [ ] A `ReportPrinter` interface with two implementations (aligned console table, CSV) selected at runtime
- [ ] `main()` is a self-test that returns 0 only if every check passes

## How the fight works
- `./quest boss 2` compiles every `.cpp` in this folder (except `tests/`) with AddressSanitizer + UBSan.
- Then it runs `./boss2_operator_overlord`, which must exit with code 0 (your self-test).
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss2 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
