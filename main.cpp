#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: towingTruck
//  action 1: towes
towingTruck.tow();
//  action 2: makes noise
towingTruck.makeNoise();
//  action 3: consumes gass
towingTruck.consumeGass();
//  2)
//  Noun: cloud
//  action 1: provides shading
cloud.shade();
//  action 2: brings rain
cloud.rain();
//  action 3: dissipates
cloud.dissipate(); 
//  3)
//  Noun: policeOfficer
//  action 1: gives out speeding tickets
policeOfficer.giveTicket();
//  action 2: protects neighbourhood
policeOfficer.protectNeighbourghood();
//  action 3: eats dougnuts
policeOfficer.eatDougnut(); 
//  4)
//  Noun: refrigerator
//  action 1: keeps stuff cool
refrigerator.cool();
//  action 2: creates backgroud noise
refrigerator.makeNoise();
//  action 3: makes food last longer
refrigerator.preserveFood(); 
//  5)
//  Noun: waterBottle
//  action 1: holds water
waterBottle.holdWater();
//  action 2: hydrates
waterBottle.hydrate();
//  action 3: rolls on the floor
waterBottle.rollOnFloor();
//  6)
//  Noun: hawk
//  action 1: glides
hawk.glide();
//  action 2: plunges
hawk.plunge();
//  action 3: screeches
hawk.screech();
//  7)
//  Noun: catcti
//  action 1: stings
catcti.sting();
//  action 2: grows
catcti.grow();
//  action 3: collects water
catcti.collectWater();
//  8)
//  Noun: blender
//  action 1: purees
blender.puree();
//  action 2: blends
blender.blend();
//  action 3: crushes
blender.crush();
//  9)
//  Noun: fireHydrant
//  action 1: provides water
fireHydrant.provideWater();
//  action 2: prevents parking
fireHydrant.preventParking();
//  action 3: hurts if hit with a knee
fireHydrant.hurtsKnee();
//  10)
//  Noun: neighbour
//  action 1: makes noise
neighbour.makeNoise();
//  action 2: is inconsiderate
neighbour.isInconsiderate();
//  action 3: does not like cops
neighbour.doesNotLikeCops();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
