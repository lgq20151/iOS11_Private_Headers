/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMomentsUtil : NSObject

+ (struct __CVBuffer { }*)createResizeFrame:(struct __CVBuffer { }*)arg1 transferSession:(struct OpaqueVTPixelTransferSession { }*)arg2 bufferPool:(struct __CVPixelBufferPool { }*)arg3;
+ (bool)pixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 matchesWidth:(int)arg2 height:(int)arg3;
+ (int)setupBufferPool:(struct __CVPixelBufferPool {}**)arg1 width:(double)arg2 height:(double)arg3;
+ (struct OpaqueVTPixelTransferSession { }*)setupTransferSession:(struct OpaqueVTPixelTransferSession { }*)arg1;

@end
