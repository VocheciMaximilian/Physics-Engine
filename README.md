# Physics-Engine
A simple 2d physics engine.
# Vector math

Vector math is handled in the `vect2d.h` file, it is mostly comprised of pure inline functions. 

The struct of 'vect2d' has two fields `x` and `y`.

1. Vector  
A vector, for example $\vec{v}=(x,y)$ with  $x,y \in  \mathbb{R}$, can represent direction, speed, position on screen, acceleration, etc.

2. Vector addition  
Let $\vec{u}$ and $\vec{v}$ be two vectors. Their sum is defined by the formula:
$\vec{w}=\vec{u}+\vec{v}=(x_u+x_v, y_u+y_v)$

3. Vector subtraction  
Let $\vec{u}$ and $\vec{v}$ be two vectors. Their subtraction is defined by the formula:   
$\vec{w}=\vec{u}-\vec{v}=(x_u-x_v, y_u-y_v)$  
This formula is usefull for determining the direction of $\vec{v}$ relative to $\vec{u}$.  
The reason i made a separate function for subtraction, instead of just using the addition with the opposite of a vector, is because i thought it would be usefull for determining relative direction and i wanted to keep the code more readable.

4. Scalar multiplication
Let $\vec{v}$ be a vector and $\alpha \in \mathbb{R}$. The scalar multiplication is defined by the formula:  
$\alpha \cdot \vec{v}=(\alpha \cdot x_v, \alpha \cdot y_v)$  
Scalar multiplication is usefull for scaling up the vector or applying constants to a vector.

5. Scalar division.
Let $\vec{v}$ be a vector and $\alpha \in \mathbb{R}$. The scalar division is defined by the formula:  
$\frac{\vec{v}}{\alpha}=(\frac{x_v}{\alpha}, \frac{y_v}{\alpha})$  
Scalar division is useful for normalizing a vector or if we want to scale it down.  
The reason i made a separate funtion for this, instead of using scalar multiplication with $1/\alpha$, is because i wanted to keep the code more readable.

6. Vector magnitude/length.  
Let $\vec{v}=(x,y)$ with  $x,y \in  \mathbb{R}$ be a vector. 
The magnitude is defined by the formula:  
$|\vec{v}|=\sqrt{x^2+y^2}$  
The magnitude is useful for normalizing a vector or determining certain caracteristics, like the velocity, force and displacements.

7. Distance between two vectors.  
Let $\vec{u}$ and $\vec{v}$ be two vectors. The distance between two vectors is defined by the formula:  
$||\vec{u}-\vec{v}||=\sqrt{(x_u-x_v)^2+(y_u-y_v)^2}$  
OBSERVATION: Both the formula for magnitude and distance can be derived using the Pythagorean theorem, in the case of magnitude we substitute $\vec{v}$ with the vector $(0,0)$.

8. Normalizing a vector.  
Let $\vec{v}=(x,y)$ be a vector. Normalizing a vector basically means keeping the same direction but with $|\vec{v}|=1$. We can normalize a formula with the formula:  
$\vec{\hat{v}}=\frac{\vec{v}}{|\vec{v}|}$ with $\vec{\hat{v}}$ being the normalized vector.

9. Dot product.  
Let $\vec{u}$ and $\vec{v}$ be two vectors. The dot product is defined by the formula:  
$\vec{u} \cdot \vec{v}=|\vec{u}| \cdot |\vec{v}| \cdot \cos (\theta)$ but this is costly and we can simplify it to this 
$\vec{u} \cdot \vec{v}=x_u \cdot x_v + y_u \cdot y_v$  
$\cos (\theta)$ is the angle between $\vec{u}$ and $\vec{v}$.   
The dot product is usefull for determining if two vectors are opposites in direction or are perpendicular.

10. Cross product.  
Let $\vec{u}$ and $\vec{v}$ be two vectors. The cross product doesn't really exists in 2D but we can still get usefull information from it. We can calculate the cross product with the formula:  
$\vec{u} \times \vec{v}=x_u \cdot y_v - y_u \cdot y_v$
The cross product is useful for determining the sense of the rotation.  
If $\vec{u} \times \vec{v} > 0$ then $\vec{v}$ is seated to the left of $\vec{u}$.  
If $\vec{u} \times \vec{v} < 0$ then $\vec{v}$ is seated to the right of $\vec{u}$.  
If $\vec{u} \times \vec{v} = 0$ then $\vec{u}$ and $\vec{v}$ are collinear.