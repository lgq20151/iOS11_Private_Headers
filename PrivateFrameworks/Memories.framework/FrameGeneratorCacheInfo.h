/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FrameGeneratorCacheInfo : NSObject {
    VideoMovie * m_movie;
    double  m_rotation;
    struct CGSize { 
        double width; 
        double height; 
    }  m_size;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  m_time;
}

@property (nonatomic, retain) VideoMovie *movie;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void)dealloc;
- (id)movie;
- (double)rotation;
- (void)setMovie:(id)arg1;
- (void)setRotation:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end