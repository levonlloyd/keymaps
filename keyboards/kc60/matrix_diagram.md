# Matrix Diagram for NPKC KC60

```
                                                    ┌───────┐
                                       2u Backspace │0D     │
                                                    └───────┘
┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
│00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0A │0B │0C │0D │49 │
├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤      ┌─────┐
│10   │11 │12 │13 │14 │15 │16 │17 │18 │19 │1A │1B │1C │1D   │      │     │
├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤   ┌──┴┐2D  │ ISO Enter
│20    │21 │22 │23 │24 │25 │26 │27 │28 │29 │2A │2B │2D      │   │2C │    │
├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤   └───┴────┘
│30  │31 │32 │33 │34 │35 │36 │37 │38 │39 │3A │3B │3D    │3C │
├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
│40  │41  │42  │45                      │4A  │4B  │4C  │4D  │
└────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
┌────────┐                                       ┌──────────┐
│30      │ 2.25u LShift             2.75u RShift │3D        │
└────────┘                                       └──────────┘
                                                 ┌───┬──────┐
                           1u/1.75u RShift (JIS) │3C │3D    │
                                                 └───┴──────┘
┌─────┬───┬─────┬───────────────────────────┬─────┬───┬─────┐
│40   │41 │42   │45                         │4B   │4C │4D   │ Tsangan/WKL/HHKB
└─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
┌─────┬───┬─────┬───────────────────────┬─────┬───┬───┬─────┐
│40   │41 │42   │45                     │4A   │4B │4C │4D   │ 6u Spacebar
└─────┴───┴─────┴───────────────────────┴─────┴───┴───┴─────┘
      ┌───┬─────┬───────────────────────┬─────┬───┐
      │41 │42   │45                     │4A   │4B │ True HHKB
      └───┴─────┴───────────────────────┴─────┴───┘
```