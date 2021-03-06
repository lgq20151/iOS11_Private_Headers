/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUVMRegionTracker : NSObject <NSSecureCoding> {
    NSMutableArray * _regionInfoArray;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    unsigned int  _task;
}

@property (readonly) long long regionCount;

+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_regionIndexForAddress:(unsigned long long)arg1;
- (void)convertStackIDs:(id /* block */)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)handleStackLogType:(unsigned int)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 stackID:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 stackLogReader:(id)arg2;
- (long long)regionCount;
- (id)vmRegionRangeInfoForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;

@end
