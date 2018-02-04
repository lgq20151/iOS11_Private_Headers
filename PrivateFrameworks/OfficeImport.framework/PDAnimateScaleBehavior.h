/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateScaleBehavior : PDAnimateBehavior {
    struct CGPoint { 
        double x; 
        double y; 
    }  mBy;
    struct CGPoint { 
        double x; 
        double y; 
    }  mFrom;
    bool  mHasBy;
    bool  mHasFrom;
    bool  mHasTo;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTo;
}

- (struct CGPoint { double x1; double x2; })by;
- (struct CGPoint { double x1; double x2; })from;
- (bool)hasBy;
- (bool)hasFrom;
- (bool)hasTo;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrom:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })to;

@end