/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCGestureFinger : NSObject {
    unsigned long long  _identifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _orbValue;
}

- (id)description;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 orbValue:(double)arg3;
- (struct CGPoint { double x1; double x2; })location;
- (double)orbValue;
- (unsigned long long)type;

@end