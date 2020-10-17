#include <iostream>
#include <opencv2/opencv.hpp>

void display_image(){
	std::string img_path = "/home/anikde/Pictures/pictures/biryani.jpeg";
	cv::Mat img = cv::imread(img_path, cv::IMREAD_COLOR );
	cv::imshow("image", img);
	cv::waitKey(0);

}
int display_video(){
	cv::VideoCapture vid("/home/anikde/Downloads/fifth_harmony.mp4");

	if(!vid.isOpened()){
		return -1;
	}

	while(true){
		cv::Mat frame;
		vid.read(frame);
		cv::imshow("video", frame);
		if (cv::waitKey(32) == 27)
			break;
		
	}
	vid.release();
	return 0;
}


int main(){

	display_image();
	display_video();

	cv::destroyAllWindows();
	return 0;


}