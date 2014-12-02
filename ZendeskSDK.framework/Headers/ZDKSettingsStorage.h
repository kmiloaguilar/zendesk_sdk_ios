/*
 *
 *  ZDKSettingsStorage.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 25/11/2014.  
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>
@class ZDKAppSettings;

@interface ZDKSettingsStorage : NSObject


/**
 *  Set the last time interval of when the settings were refreshed
 *
 *  @param interval NSTimeInterval
 */
- (void) setLastSettingsReloadInterval:(NSTimeInterval) interval;


/**
 *  Gets the last time interval of when the settings were refreshed
 *
 *  @return NSTimeInterval of the time since last refresh
 */
- (NSTimeInterval) getLastSettingsReloadInterval;


/**
 *  Gets the stored ZDKAppSettings
 *
 *  @return instance of ZDKAppSettings
 */
- (ZDKAppSettings *) storedAppSettings;


/**
 *  Saves the supplied ZDKAppSettings instance
 *
 *  @param appSettings instance of ZDKAppSettings
 */
- (void) storeAppSettings:(ZDKAppSettings *) appSettings;


/**
 *  This method can check to see if there are any stored App Settings
 *
 *  @return true if the Storage contains the ZDKAppSettings, false otherwise.
 */
- (BOOL) hasStoredAppSettings;


/**
 * Deletes ALL storage
 */
- (void) deleteStoredData;

@end
