/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATHostNetService : NSObject {
    NSString * _libraryIdentifier;
    NSNetService * _netService;
}

@property (nonatomic, readonly) NSString *libraryIdentifier;
@property (nonatomic, readonly) NSNetService *netService;

- (void).cxx_destruct;
- (id)initWithNetService:(id)arg1;
- (id)libraryIdentifier;
- (id)netService;

@end
