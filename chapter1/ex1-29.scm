;when design this program,I met some probelm
;first this program is based on sum model,we can not change it 
;then we shoule find what model need,such as everyterm's form
;sum model is focus on adding something ,not add special thing
;we should find definite term in definite program

(define (cube x) (* x x x ))

(define (sum term a next b)
  (if(> a b)
    0
    (+ (term a)
       (sum term (next a) next b))))

(define (inc x) (+ 1 x) )

(define (integral f a b n)
  (define h (/ (- b a) n))  
  (define (yk k) (f (+ a (* h k))))
  (define (simpson-term k)
    (* (cond ((or (= k 0) (= k n)) 1)
            ((odd? k) 4)
            (else 2))
       (yk k)))
  (* (/ h 3) (sum simpson-term 0 inc n)))


