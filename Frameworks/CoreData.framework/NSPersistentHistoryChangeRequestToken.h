/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _delete;
    long long  _resultType;
    NSDictionary * _token;
}

@property (readonly, retain) NSDate *date;
@property (readonly) bool delete;
@property (readonly) long long resultType;
@property (readonly, retain) NSDictionary *token;

+ (bool)supportsSecureCoding;

- (id)date;
- (void)dealloc;
- (bool)delete;
- (void)encodeWithCoder:(id)arg1;
- (id)initForRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)resultType;
- (id)token;

@end
