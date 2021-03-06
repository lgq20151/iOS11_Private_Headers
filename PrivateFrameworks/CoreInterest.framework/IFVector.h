/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFVector : NSObject <IFVector> {
    unsigned long long  _length;
    double * _vector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long length;
@property (readonly) Class superclass;
@property double*vector;

+ (id)ones:(unsigned long long)arg1;
+ (id)vectorWithElements:(double*)arg1 length:(unsigned long long)arg2;
+ (id)zeros:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithLength:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVector:(id)arg1;
- (unsigned long long)length;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)performOperation:(id)arg1 other:(id)arg2;
- (double)performScalarOperation:(id)arg1 other:(id)arg2;
- (void)setLength:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setVector:(double*)arg1;
- (double*)vector;

@end
