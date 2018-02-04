/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteEntitlementVerifier : NSObject

+ (bool)currentProcessHasBooleanEntitlement:(id)arg1;
+ (bool)currentProcessHasCalendarEntitlement;
+ (bool)currentProcessHasContactsEntitlement;
+ (bool)currentProcessHasDuetEntitlement;
+ (bool)currentProcessHasNetworkClientEntitlement;
+ (bool)currentProcessHasRecentsEntitlement;
+ (bool)currentProcessHasSuggestionsEntitlement;

@end