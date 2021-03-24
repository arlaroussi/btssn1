# i n c l u d e   < s t d i o . h >  
 # i n c l u d e   < s t r i n g . h >  
  
 v o i d   m a i n ( )  
 {  
   / *   D � c l a r a t i o n s   * /  
   c h a r   T X T [ 2 0 1 ] ;   / *   c h a � n e   d o n n � e               * /  
   i n t   I , J ;     / *   i n d i c e s   c o u r a n t s                   * /  
   i n t   L ;         / *   l o n g u e u r   d e   l a   c h a � n e         * /  
   i n t   C ;         / *   c o m p t e u r   d e s   l e t t r e s   ' e '   * /  
   i n t   A I D E ;   / *   p o u r   l ' � c h a n g e   d e s   c a r a c t � r e s   * /  
  
   / *   S a i s i e   d e s   d o n n � e s   * /  
   p r i n t f ( " E n t r e z   u n e   l i g n e   d e   t e x t e   ( m a x . 2 0 0   c a r a c t � r e s )   : \ n " ) ;  
   g e t s ( T X T ) ;   / *   L ' u t i l i s a t i o n   d e   s c a n f   e s t   i m p o s s i b l e   p o u r   * /  
   / *   l i r e   u n e   p h r a s e   c o n t e n a n t   u n   n o m b r e   v a r i a b l e   d e   m o t s .   * /  
  
   / *   a )   C o m p t e r   l e s   c a r a c t � r e s   * /  
  
   f o r   ( L = 0 ;   T X T [ L ] ;   L + + )  
           ;  
   p r i n t f ( " L e   t e x t e   e s t   c o m p o s �   d e   % d   c a r a c t � r e s . \ n " , L ) ;  
  
   / *   b )   C o m p t e r   l e s   l e t t r e s   ' e '   d a n s   l e   t e x t e   * /  
   C = 0 ;  
   f o r   ( I = 0 ;   T X T [ I ] ;   I + + )  
           i f   ( T X T [ I ] = = ' e ' )   C + + ;  
   p r i n t f ( " L e   t e x t e   c o n t i e n t   % d   l e t t r e s   \ ' e \ ' . \ n " , C ) ;  
  
   / *   c )   A f f i c h e r   l a   p h r a s e   �   l ' e n v e r s   * /  
   f o r   ( I = L - 1 ;   I > = 0 ;   I - - )  
           p u t c h a r ( T X T [ I ] ) ;     / *   o u   p r i n t f ( " % c " , T X T [ I ] ) ;   * /  
   p u t c h a r ( ' \ n ' ) ;                 / *   o u   p r i n t f ( " \ n " ) ;   * /  
  
   / *   d )   I n v e r s e r   l ' o r d r e   d e s   c a r a c t � r e s   * /  
   f o r   ( I = 0 , J = L - 1   ;   I < J   ;   I + + , J - - )  
         {  
           A I D E = T X T [ I ] ;  
           T X T [ I ] = T X T [ J ] ;  
           T X T [ J ] = A I D E ;  
         }  
   p u t s ( T X T ) ;     / *   o u   p r i n t f ( " % s \ n " , T X T ) ;   * /  
     r e t u r n ;  
 }  
 