/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALayerArray : NSArray {
    /* Warning: unhandled struct encoding: '{_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B}' */ struct _CALayerArrayIvars { 
        count **layers; 
    }  _ivars;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithLayers:(id*)arg1 count:(unsigned long long)arg2 retain:(bool)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
