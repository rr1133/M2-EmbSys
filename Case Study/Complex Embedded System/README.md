# DIGITAL CAMERA

## Introduction to Simple Digital camera

### What is Digital Camera?
Digital cameras are normally used to capture still picture or take videos through the use of an electronic image sensor. An optical system is built inside the camera which uses a variable length camera lens which is mainly used to focus light on the image capturing device. 

### Features of Digital Camera
-  It captures images.
-  It stores images in digital formate.
-  It downloads images to PC.
    i) Multiple processors and memories on one IC.
    ii) High capacity flash memory.
    
## Block Digram of Digital Camera
![digital camera](https://user-images.githubusercontent.com/81153072/155394446-0741d857-64a2-4042-b367-660e8f4b429f.png)

## Requirement Specification
System's requirement:-
i) Nonfunctional requirements:
- Constraints on design metrics (e.g., "should use 0.001 watt or less").
 
ii) Functional requirements:
- System's behavior le.g., "output X should be input Y times 2") Initial specification may be very     general and come from marketing dept.
- E.g., short document detailing market need for a low-end digital camera that:

-captures and stores at least 50 low-res images and uploads to PC.

-has long as possible battery life. 

-has expected sales volume of 200,000 if market entry <6 months.
### Nonfunctional requirements:
- Design metrics of importance based on initial specification

  i) Performance: time required to process image

   ii) Size: Number of elementary logic gates (2-input NAND gate) in IC

   iii) Power: Measure of avg. electrical energy consumed while processing

   iv) Energy: battery lifetime (power x time)

- Constrained metrics

   i) Values must be below (sometimes above) certain threshold

- Optimization metrics.

  i) Improved as much as possible to improve product

 - Metric can be both constrained and optimization.

> - Performance

>  i) Must process image fast enough to be useful

>  ii) 1 sec reasonable constraint
 
>     -Slower would be annoying
      
>     -Faster not necessary for low-end of market 
   
>  iii) Therefore, constrained metric

> - Size

>  i) Must use IC that fits in reasonably sized camera ►Constrained and optimization metric

> ii) Constraint may be 200,000 gates, but smaller would be cheaper

> - Power
  
> i) Must operate below certain temperature (cooling fan not possible) 
  
> ii) Therefore, constrained metric

> - Energy

>  i) Reducing power or time reduces energy

>  ii) Optimized metric: want battery to last as long as possible
   
  
