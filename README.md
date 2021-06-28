# IoT-Based-Crowd-Monitoring-System

The project comes under the domain of IoT and Image processing, both the technologies are used to identify overcrowded areas.

# IoT Method

This method is hardware oriented approach which is used in closed space i.e. rooms, conference halls and others, use of ultrasonic sensors to count the number of people getting inside the room, where the ultrasonic sensors are attached in the entry of the room and the count are sent to adruino to process it where it checks for the desired count as and when people enter the room. If the restricted count of the people in a particular room is reached then a buzzer alarms insisting that the total admissible count of that particular room is reached and no more people should be allowed inside the room to avoid overcrowding in the room. The restricted count is initialized based on the construction measurements of the room.

# Image Processing Method

This method is software oriented approach which is used in open space i.e. malls, public areas and others, the input to the model is directly taken from the real time monitoring cameras installed in public areas where the model will be installed in the system and the camera video is taken as input, rectangles are used to highlight the crowd violations where blue rectangle insist no violations whereas yellow rectangle insist that there is a crowd violation in a particular area, the crowded area is identified with the help of 
pixel positions of the people in the video.
