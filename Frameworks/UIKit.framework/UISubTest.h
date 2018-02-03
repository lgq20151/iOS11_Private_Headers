/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISubTest : NSObject {
    NSMutableDictionary * _data;
    NSMutableArray * _fps;
    bool  _showFps;
    bool  _showTime;
    NSNumber * _startFrame;
    NSNumber * _startTime;
    NSString * _testName;
    NSMutableArray * _time;
}

@property (readonly) NSNumber *startTime;

- (void).cxx_destruct;
- (id)getObjectForKey:(id)arg1;
- (id)initWithName:(id)arg1 metrics:(id)arg2;
- (id)outputData;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)startTime;
- (void)startWithFrameCount:(id)arg1;
- (void)stopWithFrameCount:(id)arg1;

@end
