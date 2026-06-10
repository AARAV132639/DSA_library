# First Streaming Pattern : Kth Largest Element in a Stream

## Story:

- Suppose: 
            o K =3
            o Initial nums: 4,5,6,7
            o Stream starts: add(3), add(19)....

- After every insertion we ahve to answer: Current 3rd largest?

## Observation:

- This is literally Kth largest element problem

- Previous: Given all numbers. Find kth largest

- Now: Numbers arrive one by one. Find kth largest

## Top-k pattern returns

- Maintain top k largest numbers seen so far using *min heap*

- We are a greedy society. We kick out the weakest.

## Learning essence

- A heap can maintain an answer continously as data changes.

## Streamin Family

1. Kth largest steam
2. Running median
3. Sliding Window
4. Continous Top k
5. Real time Ranking

## Journey ahead

1. Top K chapter taught: *Heap keeps best K candidates*

2. Streaming chapter adds: *Heap keeps best K candidates while data is continously changing*

3. This naturally leads to most famous heap problem : *Median finder* because now we need to main : Lower half, upper half simulatenously

4. This is where Two heap pattern begins:
                                        o Max heap : lower half
                                        o Median
                                        o Min heap : upper half