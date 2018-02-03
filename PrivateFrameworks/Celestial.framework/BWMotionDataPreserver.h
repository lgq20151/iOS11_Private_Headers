/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionDataPreserver : NSObject {
    NSString * _currentISPHallPortType;
    NSString * _name;
    NSMutableData * _preservedISPHallData;
    NSMutableData * _preservedISPMotionData;
}

+ (void)initialize;

- (bool)_preserveMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 willBeDropped:(bool)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (bool)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)reset;

@end
