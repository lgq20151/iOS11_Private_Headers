/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTab : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    struct { 
        unsigned int alignment : 4; 
        unsigned int refCount : 24; 
        unsigned int unused : 4; 
    }  _flags;
    double  _location;
    id  _reserved;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) double location;
@property (nonatomic, readonly) NSDictionary *options;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)columnTerminatorsForLocale:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (long long)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)location;
- (id)options;
- (oneway void)release;
- (unsigned long long)tabStopType;

@end
